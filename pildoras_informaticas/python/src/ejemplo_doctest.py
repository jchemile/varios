def compruebaMail(mailUsuario):

	"""
	la función compruebaMail evalua un mail recibido
	en busca de la @. Si tiene más de o ninguna es incorrecto.
	También la evaluará si es incorrecto 

	>>> compruebaMail('juan@cursos.es')
	True

	>>> compruebaMail('juan.cursos.es@')
	False

	>>> compruebaMail('juan.cursos.es')
	False

	>>> compruebaMail('juan@cursos@es')
	False

	"""

	arroba = mailUsuario.count('@')

	if(arroba!= 1 or mailUsuario.rfind('@') == (len(mailUsuario)-1) or mailUsuario.find('@')==0):
		return False

	else:
		return True

import doctest
doctest.testmod()