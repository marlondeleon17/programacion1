Algoritmo sin_titulo
	Definir N, i Como Entero
	Definir numero, suma, promedio Como Real
	suma = 0
	Escribir '�Cu�ntos n�meros desea promediar?'
	Leer N
	Para i = 1 Hasta N Con Paso 1 Hacer
		Escribir 'Ingrese el n�mero ', i, ':'
		Leer numero
		suma = suma+numero
	FinPara
	promedio = suma/N
	Escribir 'El promedio de los ', N, ' n�meros es: ', promedio
FinAlgoritmo
