import duckdb

resultado = duckdb.sql("""
    SELECT 1 AS id, 'Jonatas' AS nome
    UNION ALL
    SELECT 2, 'Henry'
    UNION ALL
    SELECT 3, 'Kauana'
    UNION ALL
    SELECT 4, 'Anastasia'
""").fetchall()

print(resultado)
