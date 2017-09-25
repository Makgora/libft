echo ''
for i in ft*.c; do
	echo '		'$i'	\'
done
echo ''
for i in ft*.c; do
	sed -n '/\(\(\(int\|void\|size_t\)	\)\|char	\(\*\|\*\*\)\|t_list	\)ft_/{p}' $i
done
