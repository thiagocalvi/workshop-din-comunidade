int soma(int k);

void main() {
  int resultado = soma(10);
  printf("%d", resultado);
  // Resultado = 55
}

int soma(int k) {
  if (k > 0) {
    return k + soma(k - 1);
  } else {
    return 0;
  }
}