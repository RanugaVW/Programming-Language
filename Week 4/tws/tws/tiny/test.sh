for f in ../../Lab4TestPrograms/pr2.c*; do
    echo "--- $(basename "$f") ---"
    ./parser/parse < "$f" > /dev/null
    c_out=$(./Constrain)
    if echo "$c_out" | grep -q "ERROR"; then
        echo "Constrainer Error:"
        echo "$c_out"
    fi
    cg_out=$(./CodeGen)
    if echo "$cg_out" | grep -q "ERROR"; then
        echo "CodeGen Error:"
        echo "$cg_out"
    fi
done
