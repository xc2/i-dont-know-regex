use regex::Regex;

fn main() {
  let re = Regex::new(r"b+$").unwrap();
  let str = "b".repeat(500000) + "a";
  println!("{}", re.is_match(&str))
}