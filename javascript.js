const str = 'b'.repeat(500000) + 'a';

console.log(/b+$/.test(str))
