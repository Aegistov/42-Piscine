cat $1 | grep -i "nicolas\tbomber" | cut -d$'\t' -f3 | grep "[0-9]"
