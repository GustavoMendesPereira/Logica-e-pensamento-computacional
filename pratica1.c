// 1) Escreva um programa em C que leia 3 números e apresente o maior.

#include <stdio.h>

int main() {

  int numero1, numero2, numero3;

  printf("Digite o primeiro numero: ");
  scanf("%d", &numero1);

  printf("Digite o segundo numero: ");
  scanf("%d", &numero2);

  printf("Digite o terceiro numero: ");
  scanf("%d", &numero3);

  if (numero1 >= numero2 && numero1 >= numero3)
    printf("O maior numero é o primeiro: %d\n", numero1);

  else if (numero2 >= numero1 && numero2 >= numero3)
    printf("O maior numero é o segundo: %d\n", numero2);

  else 
   printf("O maior numero é o terceiro: %d\n", numero3);
  
return 0;

}



// 2) Escreva um programa em C que leia o salario de um trabalhador e o valor da prestação de um empréstimo.
// Se a prestação for maior que 20% do salário imprima: "Empréstimo não concedido, caso contrario imprima:  "Empréstimo concedido."

#include <stdio.h>

int main() {

  float salario, prestacao;

  printf("Digite o salario do trabalhador: ");
  scanf("%f", &salario);

  printf("Digite o valor da prestacao do emprestimo: ");
  scanf("%f", &prestacao);



  if (prestacao > salario * 0.20) 
    printf("Emprestimo não concedido\n");
  else
    printf("Emprestimo concedido.\n");

  return 0;

}


// 3)  Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes formulas (onde  h corresponde a altura):
// • Homens: (72.7 ∗ h) − 58
// • Mulheres: (62, 1 ∗ h) − 44, 7




#include <stdio.h>

int main() {

  float altura, peso_ideal;
  char sexo;

  printf("Digite a altura (em metros, ex: 1.75): ");
  scanf("%f", &altura);

  printf("Digite o sexo (M para Masculino, F para Feminino): ");
  scanf(" %c", &sexo);

  if (sexo == 'M' || sexo == 'm') {
    peso_ideal = (72.7 * altura) - 58;
    printf("Peso ideal: %.2f kg\n", peso_ideal);
  } else if (sexo == 'F' || sexo == 'f') {
    peso_ideal = (62.1 * altura) - 44.7;
    printf("Peso ideal: %.2f kg\n", peso_ideal);
  } else {
    printf("Opcao de sexo invalida!\n");
  }

  return 0;

}


// 4 Calcule a media de 3 notas


#include <stdio.h>

int main() {

  float nota1, nota2, nota3, media;

  printf("Informe a nota 1: ");
  scanf("%f", &nota1);

  printf("Informe a nota 2: ");
  scanf("%f", &nota2);

  printf("Informe a nota 3: ");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3.0;
  printf("\nO valor da media final e: %.2f\n", media);

  if (media >= 7.0) {
    printf("Voce foi aprovado!\n");
  } else {
    printf("Voce foi reprovado.\n");
  }
  return 0;

}
