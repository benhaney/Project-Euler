fn sumsquare(mut n: u32) -> u32 {
  let mut ret = 0;
  while n != 0 {
    ret += (n%10)*(n%10);
    n = n/10;
  }
  ret
}

const MAXMEMO : u32 = 9*9*7;

fn main() {
  let mut r = 0;
  let mut memo = [false; (MAXMEMO+1) as usize];
  // Compute the results of the first 567 numbers, for which all further number
  // sequences are guarenteed to follow after one sumsquare iteration
  // i.e: sumsquare(9999999) = 567 -> sumsquare(567) sequence is known already
  for i in 1..=MAXMEMO {
    let mut j = i;
    while j != 1 && j != 89 {
      j = sumsquare(j);
    }
    if j == 89 { memo[i as usize] = true; }
  }
  // Now get the result of all 10 million sequences with only one call to
  // sumsquare each
  for mut i in 1..10_000_000 {
    if memo[sumsquare(i) as usize] { r += 1; }
  }
  println!("{}", r);
}
