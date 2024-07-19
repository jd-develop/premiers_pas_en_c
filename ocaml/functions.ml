let multiply (a: int)(b: int) : int = 
    (a*b)

let multiply_plus_two (a: int)(b: int) : int =
    let multiplied = (multiply a b) in
    let plus_one = multiplied + 1 in
    (plus_one+1)

let main = 
    print_int (multiply 3 5); print_newline ();
    print_int (multiply_plus_two 3 5); print_newline ()

