use std::io;


fn main() {
    twelve_days();

    let mut farenheit_str = String::new();

    println!("Enter a farenheit temperature: ");

    io::stdin()
        .read_line(&mut farenheit_str)
        .expect("Please enter a valid integer.");
    let farenheit: i32 = farenheit_str
        .trim().parse()
        .expect("Please enter a valid integer");
    let celsius = farenheit_to_celsius(farenheit, false);
    let kelvins = farenheit_to_celsius(farenheit, true);
    println!("The value in Celsius is approximately {celsius}");
    println!("The value in Kelvins is approximately {kelvins}");

    let mut n_str = String::new();

    println!("Enter an index in the fibonacci sequence: ");

    io::stdin()
        .read_line(&mut n_str)
        .expect("Please enter a positive integer");
    
    let n: u32 = n_str
        .trim().parse()
        .expect("Please enter a positive integer");
    let fibo = fibonacci(n);
    println!("The n-th value of the fibonacci sequence is: {fibo}")
}


fn farenheit_to_celsius(farenheit: i32, convert_to_kelvins: bool) -> i32 {
    // this function helps you convert the really weird non-standard american unit of temperature
    // to nice standard easy-to-use Celsius.
    // Pass true as second argument to convert to Kelvin instead — the real true unit of
    // temperature!
    let celsius = (5 * (farenheit - 32)) / 9;
    if convert_to_kelvins {
        celsius + 273
    } else {
        celsius
    }
}


fn fibonacci(n: u32) -> u128 {
    // calculates the nth number of the fibonacci sequence
    let (mut a, mut b) = (1, 1);
    for _ in 0..n {
        (a, b) = (b, a+b);
    }
    a
}


fn twelve_days() {
    // prints the twelve days of christmas song
    let cardinal_numbers = [
        "", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"
    ];
    let ordinal_numbers = [
        "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"
    ];
    let elements = [
        "a patridge in a pear tree", "turtle doves", "french hens", "calling birds", "golden rings",
        "geese a-laying", "swans a-swimming", "maids a-milking", "ladies dancing", "lords a-leaping",
        "pipers piping", "drummers drumming"
    ];

    let mut counter = 0;
    for _ in elements {
        let day = ordinal_numbers[counter];
        println!("On the {day} day of Christmas, my true love sent to me");
        for i in (0..=counter).rev() {
            let num = cardinal_numbers[i];
            let elt = elements[i];
            if i == 1 {
                println!("{num} {elt} and");
            } else if i == 0 {
                println!("{elt}")
            } else {
                println!("{num} {elt}");
            }
        }
        println!();
        counter += 1;
    }
}

