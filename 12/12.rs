fn divisors(x: i32) -> i32 {
  let mut divs = 0;
  let y = (x as f32).sqrt() as i32;
  for i in 1..y {
    divs += if x % i == 0 { 2 } else { 0 };
  }
  return divs + 1;
}

fn main() {
  let mut tri = 0;
  let mut i = 1;
  while divisors(tri) <= 500 {
    tri += i;
    i += 1;
  }
  println!("{}", tri);
}
