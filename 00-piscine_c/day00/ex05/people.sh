ldapsearch -Q "(uid=z*)" cn | egrep "^cn:" | cut -c5- | sort -r 
