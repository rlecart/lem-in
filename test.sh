make

printf "\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m		Error\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"


	printf "error_ants_0.map\n"
	read
	./lem-in < ./tests/error_ants_0.map
	printf "error_ants_neg.map\n"
	read
	./lem-in < ./tests/error_ants_neg.map
	printf "error_emptyfile.map\n"
	read
	./lem-in < ./tests/error_emptyfile.map
	printf "error_start_invalide.map\n"
	read
	./lem-in < ./tests/error_start_invalide.map


printf "\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m		Error -v\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"


	printf "error_ants_0.map\n"
	read
	./lem-in -v < ./tests/error_ants_0.map
	printf "error_ants_neg.map\n"
	read
	./lem-in -v < ./tests/error_ants_neg.map
	printf "error_emptyfile.map\n"
	read
	./lem-in -v < ./tests/error_emptyfile.map
	printf "error_start_invalide.map\n"
	read
	./lem-in -v < ./tests/error_start_invalide.map


printf "\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m		Valide\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"


	printf "valide_simple.map\n"
	read
	./lem-in < ./tests/valide_simple.map
	printf "valide_start_commande.map\n"
	read
	./lem-in < ./tests/valide_start_commande.map
	printf "valide_start_comment.map\n"
	read
	./lem-in < ./tests/valide_start_comment.map
