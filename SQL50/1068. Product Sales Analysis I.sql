SELECT Product.product_name, Sales.year, Sales.price FROM Sales INNER JOIN Product WHERE Sales.product_id = Product.product_id;