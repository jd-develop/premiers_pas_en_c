let main =
    let list_: int list = [1;2;3] in
    for i = 0 to (List.length list_ - 1) do print_int (List.nth list_ i); print_newline() done

