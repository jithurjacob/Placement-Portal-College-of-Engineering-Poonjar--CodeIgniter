#Options +FollowSymLinks
#RewriteEngine Off
#RewriteBase /

#RewriteRule ^$ index.php [L]
#RewriteCond %{REQUEST_FILENAME} !-d
#RewriteCond %{REQUEST_FILENAME} !-f
#RewriteCond $1 !^(index\.php|robots\.txt|favicon\.ico)

#RewriteRule ^(.*)$ index.php?/$1 [L]