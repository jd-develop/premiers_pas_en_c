let is_zero (x: int) : string =
    match x with
        | 0 -> "true"
        | _ -> "false"

let main =
    print_endline (is_zero 0);
    print_endline (is_zero 156);
    print_endline (is_zero (-156))

