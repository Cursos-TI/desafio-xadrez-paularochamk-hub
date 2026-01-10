import random
from datetime import date

financeiro = [
    "Evite gastos impulsivos.",
    "Anote todos os gastos do dia.",
    "Revise uma despesa fixa.",
    "Não compre nada hoje."
]

corpo = [
    "Faça um treino simples.",
    "Caminhe por 20 minutos.",
    "Beba mais água.",
    "Coma comida simples."
]

mente = [
    "Elimine uma decisão desnecessária.",
    "Organize apenas uma coisa.",
    "Não multitarefa.",
    "Pense no longo prazo."
]

hoje = date.today().strftime("%d/%m/%Y")

resultado = f"""
FOCO DE HOJE
{hoje}

FINANÇAS
{random.choice(financeiro)}

CORPO
{random.choice(corpo)}

MENTE
{random.choice(mente)}
"""

with open("foco_diario.txt", "a", encoding="utf-8") as arquivo:
    arquivo.write(resultado)
    arquivo.write("\n" + "=" * 30 + "\n")

print(resultado)