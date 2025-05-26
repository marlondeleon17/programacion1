Algoritmo calculadora
    Definir opc como Entero
	Definir n1,n2, suma,resta,multi, div Como Real
	
	Repetir
	
	Escribir "Seleccione la operación que desea realizar:"
    Escribir "1: Suma"
    Escribir "2: Resta"
    Escribir "3: Multiplicación"
    Escribir "4: División"
	Escribir "5: terminar"
	Escribir "ingrese una opcion: "
    Leer opc
	
	
	

    
    
    
    Si opc == 1 Entonces
        Escribir "Ingrese el primer alor:"
		Leer n1
		Escribir "Ingrese el valor de B:"
		Leer n2
		suma = n1 + n2
        Escribir "El resultado de la suma es: ", suma
        
    Sino Si opc == 2 Entonces
			Escribir "Ingrese el primer alor:"
			Leer n1
			Escribir "Ingrese el valor de B:"
			Leer n2
			resta = n1 - n2
			Escribir "El resultado de la resta es: ", resta
            
        Sino Si opc == 3 Entonces
                Escribir "Ingrese el primer alor:"
				Leer n1
				Escribir "Ingrese el valor de B:"
				Leer n2
				multi = n1 * n2
				Escribir "El resultado de la multiplicacion es: ", multi
				
            Sino Si opc == 4 Entonces
                    Escribir "Ingrese el valor de A:"
					Leer n1
					Escribir "Ingrese el valor de B:"
					Leer n2
					Div = n1 / n2
                    Escribir "El resultado division es: ", div
				finsi        
			FinSi
		FinSi
	FinSi
	
Hasta Que opc = 5
Escribir "Adios!!! "
FinAlgoritmo