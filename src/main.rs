use std::process::exit;

use chrono::prelude::*;

fn main() {
    let time = Local::now();
    if time.hour() > 5 && time.hour() < 12 {
        println!("Good Morning, Chandni!");
    } else if time.hour() >= 12 && time.hour() < 17 {
        println!("Good Afternoon, Chandni!");
    } else if time.hour() >= 18 && time.hour() < 21 {
        println!("Good evening, Chandni!");
    } else {
        println!("Please go to sleep.");
        exit(1);
    }
}
