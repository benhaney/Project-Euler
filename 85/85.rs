fn tri(x : i32) -> i32 {
  (x * (x + 1)) >> 1
}

fn subrects(x: i32, y: i32) -> i32 {
  tri(x) * tri(y)
}

const TARGET : i32 = 2_000_000;

fn main() {
  let mut close = 0;
  let mut area  = 0;
  for x in 1.. {
    for y in 1..=x {
      let sr = subrects(x, y);
      if (TARGET - sr).abs() < (TARGET - close).abs() {
        close = sr;
        area = x*y;
      }
    }
    if (TARGET - close).abs() < 100 { break; }
  }
  println!("{}", area);
}
