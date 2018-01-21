<?php

function divisors($x) {
  $divs = 0;
  $y = sqrt($x);
  for ($i = 1; $i <= $y; $i++) {
    if (!($x % $i)) $divs += 2;
  }
  return $divs + 1;
}

$tri = 0;
for ($i = 1; divisors($tri) <= 500; $i++) {
  $tri += $i;
}
print $tri."\n";

?>
