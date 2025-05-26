Algoritmo sin_titulo
	Definir valor1, valor2, suma Como Real
	Escribir 'Ingrese el primer valor:'
	Leer valor1
	Escribir 'Ingrese el segundo valor:'
	Leer valor2
	suma <- valor1+valor2
	Si suma>0 Entonces
		Escribir 'La suma es POSITIVA.'
	SiNo
		Si suma<0 Entonces
			Escribir 'La suma es NEGATIVA.'
		SiNo
			Escribir 'La suma es CERO.'
		FinSi
	FinSi
FinAlgoritmo
