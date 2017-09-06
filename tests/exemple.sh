make

printf "\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m		Error\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"

	read
	
	printf "error_ants_0.map\n"
	./lem-in < test/error_ants_0.map
	printf "error_ants_1.map\n"
	./lem-in < test/error_ants_1.map
	printf "error_ants_2.map\n"
	./lem-in < test/error_ants_2.map
	printf "error_start_0.map\n"
	./lem-in < test/error_start_0.map
	printf "error_end_0.map\n"
	./lem-in < test/error_end_0.map
	printf "err_3_coordinates.map\n"
	./lem-in < test/Maps/err_3_coordinates.map
	printf "err_duplicate.map\n"
	./lem-in < test/Maps/err_duplicate.map
	printf "err_empty.map\n"
	./lem-in < test/Maps/err_empty.map
	printf "err_letter_in_coordinate.map\n"
	./lem-in < test/Maps/err_letter_in_coordinate.map
	printf "err_link_to_unknown_room.map\n"
	./lem-in < test/Maps/err_link_to_unknown_room.map
	printf "err_no_ants.map\n"
	./lem-in < test/Maps/err_no_ants.map
	printf "err_no_ants2.map\n"
	./lem-in < test/Maps/err_no_ants2.map
	printf "err_no_ants3.map\n"
	./lem-in < test/Maps/err_no_ants3.map
	printf "err_no_end.map\n"
	./lem-in < test/Maps/err_no_end.map
	printf "err_no_end2.map\n"
	./lem-in < test/Maps/err_no_end2.map
	printf "err_no_links.map\n"
	./lem-in < test/Maps/err_no_links.map
	printf "err_no_path.map\n"
	./lem-in < test/Maps/err_no_path.map
	printf "err_no_rooms.map\n"
	./lem-in < test/Maps/err_no_rooms.map
	printf "err_no_start.map\n"
	./lem-in < test/Maps/err_no_start.map
	printf "err_no_start2.map\n"
	./lem-in < test/Maps/err_no_start2.map
	printf "err_start_end_same.map\n"
	./lem-in < test/Maps/err_start_end_same.map
	printf "err_tirtir\n"
	./lem-in < test/Maps/err_tirtir
	printf "err_too_few_ants.map\n"
	./lem-in < test/Maps/err_too_few_ants.map
	printf "err_too_many_ants.map\n"
	./lem-in < test/Maps/err_too_many_ants.map

printf "\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m		Error with -v\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"

	read

	printf "error_ants_0.map\n"
	./lem-in -v < test/error_ants_0.map
	printf "error_ants_1.map\n"
	./lem-in -v < test/error_ants_1.map
	printf "error_ants_2.map\n"
	./lem-in -v < test/error_ants_2.map
	printf "error_start_0.map\n"
	./lem-in -v < test/error_start_0.map
	printf "error_end_0.map\n"
	./lem-in -v < test/error_end_0.map
	printf "err_3_coordinates.map\n"
	./lem-in -v < test/Maps/err_3_coordinates.map
	printf "err_duplicate.map\n"
	./lem-in -v < test/Maps/err_duplicate.map
	printf "err_empty.map\n"
	./lem-in -v < test/Maps/err_empty.map
	printf "err_letter_in_coordinate.map\n"
	./lem-in -v < test/Maps/err_letter_in_coordinate.map
	printf "err_link_to_unknown_room.map\n"
	./lem-in -v < test/Maps/err_link_to_unknown_room.map
	printf "err_no_ants.map\n"
	./lem-in -v < test/Maps/err_no_ants.map
	printf "err_no_ants2.map\n"
	./lem-in -v < test/Maps/err_no_ants2.map
	printf "err_no_ants3.map\n"
	./lem-in -v < test/Maps/err_no_ants3.map
	printf "err_no_end.map\n"
	./lem-in -v < test/Maps/err_no_end.map
	printf "err_no_end2.map\n"
	./lem-in -v < test/Maps/err_no_end2.map
	printf "err_no_links.map\n"
	./lem-in -v < test/Maps/err_no_links.map
	printf "err_no_path.map\n"
	./lem-in -v < test/Maps/err_no_path.map
	printf "err_no_rooms.map\n"
	./lem-in -v < test/Maps/err_no_rooms.map
	printf "err_no_start.map\n"
	./lem-in -v < test/Maps/err_no_start.map
	printf "err_no_start2.map\n"
	./lem-in -v < test/Maps/err_no_start2.map
	printf "err_start_end_same.map\n"
	./lem-in -v < test/Maps/err_start_end_same.map
	printf "err_tirtir\n"
	./lem-in -v < test/Maps/err_tirtir
	printf "err_too_few_ants.map\n"
	./lem-in -v < test/Maps/err_too_few_ants.map
	printf "err_too_many_ants.map\n"
	./lem-in -v < test/Maps/err_too_many_ants.map

printf "\033[1;34m-----------------------------------------\033[0;m\n"
printf "\033[1;34m	    Test\033[0;m\n"
printf "\033[1;34m-----------------------------------------\033[0;m\n"

	read

	printf "test.map\n"
	read
    ./lem-in < test/test.map
    ./lem-in < test/test.map | wc -l
	printf "test2.map\n"
	read
    ./lem-in < test/test2.map
    ./lem-in < test/test2.map | wc -l
	printf "1.map\n"
	read
    ./lem-in < test/Maps/1.map
    ./lem-in < test/Maps/1.map | wc -l
	printf "2.map\n"
	read
    ./lem-in < test/Maps/2.map
    ./lem-in < test/Maps/2.map | wc -l
	printf "5.map\n"
	read
    ./lem-in < test/Maps/5.map
    ./lem-in < test/Maps/5.map | wc -l
	printf "9_path_depth_9_ants.map\n"
	read
    ./lem-in < test/Maps/9_path_depth_9_ants.map
    ./lem-in < test/Maps/9_path_depth_9_ants.map | wc -l
	printf "9_path_depth_10_ants.map\n"
	read
    ./lem-in < test/Maps/9_path_depth_10_ants.map
    ./lem-in < test/Maps/9_path_depth_10_ants.map | wc -l
	printf "10_lots_of_comments.map\n"
	read
    ./lem-in < test/Maps/10_lots_of_comments.map
    ./lem-in < test/Maps/10_lots_of_comments.map | wc -l
	printf "10.map\n"
	read
    ./lem-in < test/Maps/10.map
    ./lem-in < test/Maps/10.map | wc -l
	printf "10K.map\n"
	read
    ./lem-in < test/Maps/10K.map
    ./lem-in < test/Maps/10K.map | wc -l
	printf "42\n"
	read
    ./lem-in < test/Maps/42
    ./lem-in < test/Maps/42 | wc -l
	printf "bait\n"
	read
    ./lem-in < test/Maps/bait
    ./lem-in < test/Maps/bait | wc -l
	printf "big\n"
	read
    ./lem-in < test/Maps/big
    ./lem-in < test/Maps/big | wc -l
	printf "choicex2\n"
	read
    ./lem-in < test/Maps/choicex2
    ./lem-in < test/Maps/choicex2 | wc -l
	printf "choicex5\n"
	read
    ./lem-in < test/Maps/choicex5
    ./lem-in < test/Maps/choicex5 | wc -l
#	printf "choicexxx\n"
#	read
#   ./lem-in < test/Maps/choicexxx
	printf "cpasisimpl\n"
	read
    ./lem-in < test/Maps/cpasisimpl
    ./lem-in < test/Maps/cpasisimpl | wc -l
	printf "lonetpalon\n"
	read
    ./lem-in < test/Maps/lonetpalon
    ./lem-in < test/Maps/lonetpalon | wc -l
	printf "pdf\n"
	read
    ./lem-in < test/Maps/pdf
    ./lem-in < test/Maps/pdf | wc -l
	printf "s4to2e\n"
	read
    ./lem-in < test/Maps/s4to2e
    ./lem-in < test/Maps/s4to2e | wc -l
