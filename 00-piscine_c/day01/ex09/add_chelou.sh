#!/bin/sh
FT_NBR1=$( echo "$FT_LINE1" | sed "s/'/1/g" | sed "s/\\\/2/g" | sed "s/\"/3/g" | sed "s/\?/4/g" | sed "s/\!/5/g" ) 
FT_NBR2=$( echo "$FT_LINE2" |tr "mrdoc" "12345")
FT_NBR=$(echo "$FT_NBR1+$FT_NBR2" | bc ) | echo "ibase=5;obase=12;$FT_NBR"| bc | echo "$FT_NBR" | tr  "0123456789AB" "gtaio luSnemf"
