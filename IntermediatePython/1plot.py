# Print the last item from year and pop
# primeiro imprimi as listas que já foram declaradas antes, que continham as variáveis necessárias
print(year)
print(pop)


# Import matplotlib.pyplot as plt
# para plotar, é necessário importar a biblioteca e a nomeei como plt
import matplotlib.pyplot as plt

# Make a line plot: year on the x-axis, pop on the y-axis
# nessa parte foi declarado as posições de cada variável no gráfico
plt.plot(year, pop)

# Display the plot with plt.show()
# essa função mostra o gráfico criado
plt.show()
