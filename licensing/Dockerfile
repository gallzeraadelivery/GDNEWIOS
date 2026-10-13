FROM python:3.13-slim
RUN apt-get update && apt-get install -y --no-install-recommends openssl && rm -rf /var/lib/apt/lists/* && useradd --uid 10001 --create-home app
WORKDIR /app
COPY server.py admin.html admin.js style.css ./
COPY assets ./assets
USER 10001:10001
ENV LICENSE_DATA=/data PYTHONDONTWRITEBYTECODE=1 PYTHONUNBUFFERED=1
EXPOSE 8080
CMD ["python", "server.py"]
