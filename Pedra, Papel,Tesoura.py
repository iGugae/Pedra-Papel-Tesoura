from random import randint;
from time import sleep;

#Interface
print('\n~-~-~-~ SEJA BEM-VINDO ~-~-~-~')
print('''As opções são as seguintes:
1 - Pedra 
2 - Papel 
3 - Tesoura''')

#Função opção
def option (escolha):
    if (escolha == 1):
        print('PEDRA!')
    elif (escolha == 2):
        print('PAPEL!')
    elif (escolha == 3):
        print('TESOURA!')

#Vez do Jogador
jogador = int(input('Escolha sua jogada: '))
option (jogador)

print('\nAgora vamos ver o que o computador escolheu..')
sleep(2)

#Vez do Computador
computador = randint (1,3)
option (computador)

#Análise de resultados
if (jogador == computador):
    resultado = 'Você e o Bot EMPATARAM!'
elif (jogador == 1 and computador == 3 or jogador == 2 and computador == 1 or jogador == 3 and computador == 2):
    resultado = 'Parabéns! Você venceu o Bot.'
else:
    resultado = 'Que pena! Você perdeu para o Bot :('
sleep(1)
print('\nEntão..',resultado)
