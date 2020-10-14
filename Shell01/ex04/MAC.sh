ifconfig -a | grep "ether [0-9a-fA-F:]" | sed 's|ether||' | sed -e 's|[[:space:]]||g'
