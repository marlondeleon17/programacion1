Algoritmo sin_titulo
	Definir A, B, cociente, residuo Como Real
	Escribir 'Ingrese el valor de A:'
	Leer A
	Escribir 'Ingrese el valor de B:'
	Leer B
	Si B<>0 Entonces
		cociente <- A/B
		residuo <- A MOD B
		Escribir 'El cociente de A / B es: ', cociente
		Escribir 'El residuo de A % B es: ', residuo
	SiNo
		Escribir 'Error: No se puede dividir entre cero.'
	FinSi
FinAlgoritmo
