cat /etc/passwd \
| sed '/^#/d' \
| awk 'NR %2 == 0' \
| sed 's/:.*//g' | rev \
| sort -r \
| awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' \
| tr '\n' ' ' | sed 's/ /, /g' \
| sed 's/, $/./g' \
| tr -d '\n'  
