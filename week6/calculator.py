# Lendo os dados
num1 = int(input())
operacao = input().strip()
num2 = int(input())

# Realizando a operação e imprimindo o resultado
if operacao == "+":
    print(num1 + num2)
elif operacao == "-":
    print(num1 - num2)
elif operacao == "*":
    print(num1 * num2)
elif operacao == "/":
    if num2 == 0:
        print("Erro: divisão por zero!")
    else:
        print(num1 // num2)
elif operacao == "%":
    if num2 == 0:
        print("Erro: divisão por zero!")
    else:
        print(num1 % num2)
else:
    print("Operação inválida")
