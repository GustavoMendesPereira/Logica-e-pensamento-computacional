// 1) O valor pago por um Hotel da Praia de Iracema para seus porteiros é de R$ 10,25 por hora de trabalho. Faça um programa que pergunte ao usuário quantas horas ele trabalhou e imprima na tela o valor do salário a ser recebido por ele.



#include <stdio.h>

int main()

{
  float salario, htrabalho;
  printf("Informe quantas horas de trabalho: ");
  scanf("%f", &htrabalho);

  salario = htrabalho * 10.25;

  printf("O valor do seu salario do mês é: %.2f\n", salario);

  
  return 0;

}



// 2) Sabendo que na Faculdade ABC a média mínima é 7,0 e a tolerância de faltas é 15 % da carga horária do curso, faça um programação em C que peça as informações necessárias e informe a situação do usuário.





#include <stdio.h>



int main()

{
  float nota1, nota2, nota3, media;

  printf("Informe o valor da primeira nota: ", nota1);
  scanf("%f", &nota1);

  printf("Informe o valor da primeira nota: ", nota2);
  scanf("%f", &nota2);

  printf("Informe o valor da primeira nota: ", nota3);
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;
  int cargahoraria, faltas, limitefaltas;

   

  if (media >= 7)
  printf("Você passou! Sua media foi de: %.2f\n", media);
  else printf("Você reprovou, sua media foi de: %.2f\n ", media);
  
  printf("Qual a carga horaria do curso: ");
  scanf("%d", &cargahoraria);

  printf("Qual a quantidade de faltas do estudante");
  scanf("%d", &faltas);

  limitefaltas = cargahoraria * 0.15;
  
  if (media >= 7 && faltas <= limitefaltas)
    printf("Aluno aprovado! Media: %.2f\n", media);
  else
    printf("Aluno reprovado! Media: %.2f\n", media);


  return 0;

}


// 3) • Construa um programação em C que peça o Nome, Endereço, Sexo, Cidade, Estado, Idade dos funcionários. Além disto, dado o Salário Bruto do funcionário, calcule o seu Salário Líquido. Considere que os descontos podem ser o Vale Transporte (2%), Vale Alimentação (5%) e Plano de Saúde (10%).

#include <stdio.h>



int main()

{

  char nome[50], endereco[100], sexo, cidade[50], estado[30];

  int idade;
  float salario, desconto, salariofinal;


  printf("Digite o seu nome: ");
  scanf("%s", nome);

  printf("Digite o seu endereco: ");
  scanf("%s", endereco);

  printf("Digite o seu sexo: ");
  scanf(" %c", &sexo);

  printf("Digite sua cidade: ");
  scanf("%s", cidade);

  printf("Digite seu estado: ");
  scanf("%s", estado);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite seu salario: ");
  scanf("%f", &salario);

  desconto = salario * 0.17;
  salariofinal = salario - desconto;

  printf("\nNome: %s\n", nome);
  printf("Endereco: %s\n", endereco);
  printf("Sexo: %c\n", sexo);
  printf("Cidade: %s\n", cidade);
  printf("Estado: %s\n", estado);
  printf("Idade: %d\n", idade);
  printf("Salario final: R$ %.2f\n", salariofinal);


  return 0;

}
