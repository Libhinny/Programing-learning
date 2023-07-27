# Change the line plot below to a scatter plot
# usando as mesmas linhas de código do anterior, mas utilizando a função scatter
plt.scatter(gdp_cap, life_exp)

# Put the x-axis on a logarithmic scale
# aqui, para fazer com que a correlação se mostre mais clara, deixamos numa escala logaritmica
plt.xscale('log')

# Show plot
# como antes, plotamos para vermos o gráfico
plt.show()
