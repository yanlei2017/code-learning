bool isPalindrome(int x) {
  if (x >= 0) {
    long xx = x;
    long rs = 0;  //用long类型判断溢出
    while (x) {
      rs = rs * 10 + x % 10;
      x /= 10;
    }
    return rs == xx ? 1 : 0;
  } else {
    return 0;
  }
  return 0;
}
