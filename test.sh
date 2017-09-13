make

printf "\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m		Error -v\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"

	printf "\nerror_ants_0.map\n"
	read
	./lem-in -v < ./tests/error_ants_0.map
	printf "\nerror_ants_neg.map\n"
	read
	./lem-in -v < ./tests/error_ants_neg.map
	printf "\nerror_emptyfile.map\n"
	read
	./lem-in -v < ./tests/error_emptyfile.map
	printf "\nerror_start_invalide.map\n"
	read
	./lem-in -v < ./tests/error_line_invalide.map
	printf "\nerror_coor_neg.map\n"
	read
	./lem-in -v < ./tests/error_coor_neg.map
	printf "\nerror_coor.map\n"
	read
	./lem-in -v < ./tests/error_coor.map
	printf "\nerror_room_name_L.map\n"
	read
	./lem-in -v < ./tests/error_room_name_L.map
	printf "\nerror_name_exist.map\n"
	read
	./lem-in -v < ./tests/error_name_exist.map
	printf "\nerror_name_dash.map\n"
	read
	./lem-in -v < ./tests/error_name_dash.map
	printf "\nerror_two_start.map\n"
	read
	./lem-in -v < ./tests/error_two_start.map
	printf "\nerror_line_invalide.map\n"
	read
	./lem-in -v < ./tests/error_line_invalide.map
	printf "\nerror_link_missing.map\n"
	read
	./lem-in -v < ./tests/error_link_missing.map
	printf "\nerror_link_wrong.map\n"
	read
	./lem-in -v < ./tests/error_link_wrong.map
	printf "\nerror_link_himself.map\n"
	read
	./lem-in -v < ./tests/error_link_himself.map
	printf "\nerror_missing_room.map\n"
	read
	./lem-in -v < ./tests/error_missing_room.map
	printf "\nerror_missing_start.map\n"
	read
	./lem-in -v < ./tests/error_missing_start.map
	printf "\ndev/random\n"
	read
	./lem-in -v < /dev/random

printf "\n\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m		Valide\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"


	printf "\nvalide_simple.map\n"
	read
	./lem-in < ./tests/valide_simple.map
	printf "\nvalide_start_commande.map\n"
	read
	./lem-in < ./tests/valide_start_commande.map
	printf "\nvalide_start_comment.map\n"
	read
	./lem-in < ./tests/valide_start_comment.map
	printf "\nvalide_comment_between_start_end.map\n"
	read
	./lem-in -v < ./tests/valide_comment_between_start_end.map
	printf "\nvalide_george.map\n"
	read
	./lem-in < ./tests/valide_george.map
	printf "\nvalide_longer.map\n"
	read
	./lem-in < ./tests/valide_longer.map
	printf "\nvalide_fish.map\n"
	read
	./lem-in < ./tests/valide_fish.map
	printf "\nvalide_hand.map\n"
	read
	./lem-in < ./tests/valide_hand.map
	printf "\nvalide_start_end.map\n"
	read
	./lem-in < ./tests/valide_start_end.map
	printf "\nvalide_web.map\n"
	read
	./lem-in < ./tests/valide_web.map
	printf "\nvalide_10k_rooms.map\n"
	read
	./lem-in < ./tests/valide_10k_rooms.map
