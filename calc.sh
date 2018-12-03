#!/bin/bash
usage(){
echo "Bitte geben sie 2 Zahlen ein und ein arithmetischen ausdruck z.b(1 add 1)" >>/dev/stderr
echo "add,sub,mult,div,mod,exp" >>/dev/stderr
exit 1
}

if [[ "$#" -ne 3 ]]; then
	usage
fi

echo $1
echo $3
action=$2


case "$action" in
add)echo "Addition  erg=$(($1 + $3))";;
sub)echo "Subtraktion erg=$(($1 - $3))" ;;
mult)echo "Multiplikation erg$(($1 * $3))" ;;
div)echo "Division erg=$(($1 / $3))";;
mod)echo "Modulotion erg=$(($1 % $3))";;
exp)echo "Exponentiation erg=$(($1 ** $3))";;
esac


