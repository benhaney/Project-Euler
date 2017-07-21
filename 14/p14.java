public class p14 {
  static int collatz(long n) {
    int i;
    for (i = 0; n > 1; i++) {
      n = ((n % 2) == 0) ? n / 2 : (n * 3) + 1;
    }
    return i;
  }
  public static void main(String[] args) {
    int highestLength = 0;
    int highestSeed = 0;
    for (int i = 0; i < 1000000; i++) {
      int x = collatz(i);
      if (x > highestLength) {
        highestLength = x;
        highestSeed = i;
      }
    }
    System.out.println(highestSeed);
  }
}
