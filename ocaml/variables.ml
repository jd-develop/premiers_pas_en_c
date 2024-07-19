let a = 5;;

print_int a; print_newline ();;
print_string (if (a = 12) then "12" else "not 12"); print_newline () ;;

a = 2;; (*this will not work as we expect: this returns the boolean false *)
let a = 2;;

print_string "Now a is "; print_int a; print_newline ();;

