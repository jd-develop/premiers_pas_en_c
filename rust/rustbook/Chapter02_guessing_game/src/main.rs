use std::io;
use rand::Rng;
use std::cmp::Ordering;


fn main() {
    println!("Guess the number!");
    let secret_number = rand::thread_rng().gen_range(1..=100);
    // println!("The number is {secret_number}.");

    loop {
        println!("Please input your guess.");

        let mut guess = String::new();

        match io::stdin()
            .read_line(&mut guess)
        {
            Ok(_) => (),
            Err(_) => {
                println!("Failed to read the line");
                continue;
            }
        }

        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Please type a posivite integer strictly less than 4294967296!");
                continue;
            }
        };
        // println!("You guessed: {}", guess);
        println!("You guessed: {guess}");

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
                println!("You win!");
                break;
            }
        }
    }
}
