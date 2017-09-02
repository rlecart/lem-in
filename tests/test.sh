make

printf "\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m		Error\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"

	read
	printf "error_ants_0.map\n"
	../lem-in < error_ants_0.map
	read
	printf "error_ants_neg.map\n"
	../lem-in < error_ants_neg.map
	read
	printf "error_emptyfile.map\n"
	../lem-in < error_emptyfile.map
	read
	printf "error_start_invalide.map\n"
	../lem-in < error_start_invalide.map

printf "\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m		Valide\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"

	read
	printf "valide_simple.map\n"
	../lem-in < valide_simple.map
	read
	printf "valide_start_commande.map\n"
	../lem-in < valide_start_commande.map
	read
	printf "valide_start_comment.map\n"
	../lem-in < valide_start_comment.map
