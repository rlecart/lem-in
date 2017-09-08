make

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
	./lem-in -v < ./tests/error_line_invalide.map
	printf "error_coor_neg.map\n"
	read
	./lem-in -v < ./tests/error_coor_neg.map
	printf "error_coor.map\n"
	read
	./lem-in -v < ./tests/error_coor.map
	printf "error_room_name_L.map\n"
	read
	./lem-in -v < ./tests/error_room_name_L.map
	printf "error_line_invalide.map\n"
	read
	./lem-in -v < ./tests/error_line_invalide.map
	printf "error_link_missing.map\n"
	read
	./lem-in -v < ./tests/error_link_missing.map
	printf "error_link_wrong.map\n"
	read
	./lem-in -v < ./tests/error_link_wrong.map
	printf "error_missing_room.map\n"
	read
	./lem-in -v < ./tests/error_missing_room.map
	printf "error_missing_start.map\n"
	read
	./lem-in -v < ./tests/error_missing_start.map
	printf "error_name_dash.map\n"
	read
	./lem-in -v < ./tests/error_name_dash.map
	printf "error_two_start.map\n"
	read
	./lem-in -v < ./tests/error_two_start.map




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
	printf "valide_comment_between_start_end.map\n"
	read
	./lem-in < ./tests/valide_comment_between_start_end.map
