MovieRental refactoring kata
============================

It is a program to calculate and print a statement of a customer’s charges at a video store. The program tells which movies a customer rented and for how long. It then calculates the charges, which depend on how long the movie is rented and identifies the type of movie. There are three kinds of movies: regular, children’s, and new releases.

In addition to calculating charges, the statement also computes frequent renter points, which vary depending on whether the film is a new release. You have to refactor it safely.

your boss want besides text support add html support to print the statements customer. For instance the html version should produce something like this:
```html
<h1>Rental Record for <em>Thomas</em></h1>
<table>
  <tr><td>The Amazing SpiderMan</td><td>2</td></tr>
</table>
<p>Amount owed is <em>3</em></p>
<p>You earned <em>1</em> frequent renter points</p>
```