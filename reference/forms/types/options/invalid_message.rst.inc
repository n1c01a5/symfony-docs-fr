invalid_message
~~~~~~~~~~~~~~~

**type**: ``string`` **default**: ``This value is not valid``

C'est le message d'erreur de validation qui est utilisé si la donnée saisie
dans ce champ n'est pas compréhensible (c'est-à-dire que la validation échoue).

Cela arrive, par exemple, quand l'utilisateur saisit une chaîne de caractères sans
aucun sens dans un champ :doc:`time</reference/forms/types/time>` et que cette chaîne
ne peut être convertie en temps, ou alors si l'utilisateur saisit une chaîne
(ex ``pomme``) dans un champ qui attend un nombre.

La validation (par exemple définir une longueur minimum pour un champ) classique
(logique métier) devrait contenir un message de validation avec vos règles de
validation (:ref:`Référence<book-validation-constraint-configuration>`).
