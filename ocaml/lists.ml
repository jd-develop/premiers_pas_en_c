let print_elements_of_list (list_: int list) =
    for i = 0 to (List.length list_ - 1) do print_int (List.nth list_ i); print_string(", ") done;
    print_newline ()

let is_list_empty (list_: int list): int =
    begin match list_ with
    | [] -> 1
    | h::t -> 0
    end

let rec recursive_length (list_: int list): int =
    begin match list_ with
    | [] -> 0
    | h::t -> 1 + (recursive_length t)
    end

let main =
    let list_: int list = [1;2;3] in
    print_elements_of_list(list_);
    print_elements_of_list(0::list_);
    print_int (is_list_empty []); print_newline ();
    print_int (is_list_empty [1; 2; 3; 4]) ; print_newline ();
    print_int (recursive_length list_); print_newline();
    print_int (recursive_length []); print_newline();
    print_int (recursive_length (list_ @ [4; 5; 6])); print_newline ()

