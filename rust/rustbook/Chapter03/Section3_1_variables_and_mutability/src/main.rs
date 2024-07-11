fn main() {
    // let x = 5;  // this does not compile
    let mut x = 5;
    println!("x={x}");
    x = 6;
    println!("x={x}");

    // constants
    // const mut X: u8 = 245;  // this does not compile
    const X: u8 = 245;
    // X = 12;  // this does not compile
    println!("{}", X);

    // shadowing
    let x = 14;
    println!("x={x}");

    {
        let x = x*2;
        println!("inner scope: x={x}");
    }
}
