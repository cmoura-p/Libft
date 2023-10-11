cat /etc/passwd | cut -d ':' -f 1 | sed -n '2~2p' | rev | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | tr '\n' ', ' | sed 's/, */, /g; s/\(.*\), /\1./'
