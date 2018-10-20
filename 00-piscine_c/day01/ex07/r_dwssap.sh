#!/bin/sh

cat /etc/passwd | sed "/^#/d" | awk '{ if( !(NR % 2)  ) print $0 }' | cut -d: -f1 | rev | sort -r | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" '{if( (NR >= FT_LINE1) && (NR <= FT_LINE2) ) print $0", "  }' | tr -d "\n" | sed s"/, $/./" | tr -d '\n'
