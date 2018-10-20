#include <unistd.h>
#include "mlx.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nb_long;
	int		nb_tenth;
	int		nb_modulo_ten;

	nb_long = (long)nb;
	if (nb_long < 0)
	{
		nb_long *= -1;
		ft_putchar('-');
	}
	if (nb_long <= 9)
	{
		ft_putchar(nb_long + '0');
	}
	else
	{
		nb_tenth = nb_long / 10;
		nb_modulo_ten = nb_long % 10;
		ft_putnbr(nb_tenth);
		ft_putchar(nb_modulo_ten + '0');
	}
	return ;
}

typedef struct	s_params
{
	void		*mlx_ptr;
	void		*win_ptr;
} 				t_params;


int deal_key(int key, void *param)
{
	// sera appele lorsque la touche sera appuyee avec les args ci-dessus
	void		*mlx_ptr;
	void		*win_ptr;
	t_params	*p;
	static		int v;
	
	p = (t_params *)param;
	mlx_ptr = p->mlx_ptr;
	win_ptr = p->win_ptr;

	ft_putchar('X');
	ft_putnbr(key);
	if(key == 12)
	{
		v += 12;
		mlx_pixel_put(mlx_ptr, win_ptr, 300 + v, 300 + v, 0xffffff);
	}
	return (0);

}

int main(void)
{
	void		*mlx_ptr;			// identifiant de la connexion
	void		*win_ptr;			// identifiant de la fenetre
	t_params	p;

	//mlx_ptr : identifiant de connexion au serveur graphique
	mlx_ptr = mlx_init();		// --> maintenant la connexion avec le serveur graphique EST ETABLIE


	// ouvrir une fenetre
	// renvoie un identifiant de la fentre car on peut ouvrir plusieurs fenetres en meme temps
	// void *mlx_new_window ( void *mlx_ptr, int size_x, int size_y, char *title );
	// si on veut dessiner dans une fenetre : on aura besoin de l identifiant de la fenetre
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "mlx 42");
	

	mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xffffff);

	// On veut detecter ici par exple lorsque une touche de clavier a ete appuyee
	// int mlx_key_hook ( void *win_ptr, int (*funct_ptr)(), void *param );
	//                                          ^                  ^
	//                                          |                  |
	// Sera appelee par mlx_loop() lors touch___|                  |
	//                                                             |
	//param est ignoree par mlx_loop et sera transmis a funct_ptr__|
	
	//mlx_key_hook(win_ptr, &deal_key, (void*)0);
	p.mlx_ptr = mlx_ptr;
	p.win_ptr = win_ptr;
	mlx_key_hook(win_ptr, &deal_key, (void*)&p);
	
	// une fois que l on a intialise la connextion et creee la fenetre
	// on ne peut s arreter la sinon le progamme s arrete et L ON N AURA RIEN sur l ecran
	// il faut appeler mlx_loop() qui est INDISPENSABLE
	// ON LAISSE LA MAIN ici au serveur graphique
	mlx_loop(mlx_ptr);		// demande a MAC OS de dessiner ce qu on lui a demande de dessiner. Par exple ici d ouvrir la fenetre
							// et prend en charge la gestion des evts. Par exple si l utilisateur bouge la souris... il faut que le 
							// programme puisse recuperer ces evts
	return (0);
}
