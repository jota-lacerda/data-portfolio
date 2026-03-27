import duckdb

resultado = duckdb.sql("SELECT 42 AS resposta").fetchall()
print(resultado)