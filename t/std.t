
use Crypt::Passwd;

$| = 1;

print "1..2\n";

if (unix_std_crypt("foo", "bar") eq "ba4TuD1iozTxw") {
	print "ok 1\n";
}
else {
	print "not ok 1\n";
}

if (unix_ext_crypt("foo", "bar") eq "ba2sPhfOQ.cWwJyGvzMWSid.") {
	print "ok 2\n";
}
else {
	print "not ok 2\n";
}
