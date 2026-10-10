# Plan de coordinación del equipo — Proyecto Final SGSI (Grupo 3)

Elaborado por Heylin (PM y QA) el 10-oct-2026. Es un borrador para que kiva lo revise. Las fechas son propuestas y kiva las confirma o las cambia.

## 1. Roles

| Rol | Quién | Responsabilidad |
|---|---|---|
| CEO / decisor | kiva | Aprueba entregables, versiones finales, envíos y cambios de alcance. Nada se publica, envía ni edita en los originales sin su visto bueno. |
| PM y QA | Heylin | Planifica, da seguimiento, revisa con criterio de normas (checklist `/workspace/guia/revision-normas.md`) y da la aprobación técnica. |
| Programadora / autora principal | Ardilla | Redacta y aplica los cambios en la guía maestra, y hace el código y los diagramas. Reporta a Heylin paso a paso. |
| Apoyo | madi | Análisis por integrante, diapositivas y revisión cruzada. |
| Apoyo | Grok Bot | Tareas de apoyo que asigne la PM. |
| Apoyo | New Bot | Tareas de apoyo que asigne la PM (por definir). |

## 2. Pendientes y plazos propuestos

| # | Pendiente | Responsable | Plazo propuesto | Estado |
|---|---|---|---|---|
| 1 | Detalle menor 1: en la p. 50, pregunta 3, cambiar "se reducen los segmentos a 8" por una referencia a las opciones 1 y 2 de la Tabla 6 | Ardilla | — | Resuelto (según Ardilla, 1:00 a. m.; Heylin lo verifica en la revisión completa) |
| 2 | Detalle menor 2: en la opción 2, indicar qué firewall corre Suricata (P08) y que el relay DHCP de FW01 llega a DC01 y WDS01 por el enlace de tránsito | Ardilla | — | Resuelto (según Ardilla, 1:00 a. m.; Heylin lo verifica en la revisión completa) |
| 3 | Terminar el diagrama de topología y cambiar los "§" por "sección" | Ardilla | ~10-15 min (estimado por Ardilla, 1:22 a. m.) | En curso |
| 4 | Revisión completa nueva de la guía maestra (los tres, sin editar el archivo, los hallazgos se comparten primero y los cambios se aplican juntos) | Heylin, madi, Ardilla | Cuando Ardilla avise que la versión está lista | En espera |
| 5 | Confirmar por escrito con el profesor el laboratorio local (VirtualBox + WDS en lugar de nube) | kiva | Lo antes posible | Pendiente |
| 6 | Subir el código del integrante 2 al repositorio (rama + PR) | Ardilla | Cuando kiva confirme directamente y comparta el link del repo | En espera de kiva |
| 7 | Aprobación final de la guía maestra | kiva | Después del punto 4 | Pendiente |

## 3. Reporte paso a paso

1. **Al empezar una tarea**, Ardilla le avisa a Heylin qué va a hacer y cuánto estima que tardará.
2. **En cada hito** (sección terminada, cambio aplicado, bloqueo encontrado), manda un aviso corto a Heylin con qué hizo, qué sigue y si tiene dudas.
3. **Si tiene dudas o hay un cambio de alcance**, le pregunta a Heylin antes de seguir. Si es una decisión, Heylin la sube a kiva.
4. **Al terminar**, avisa con la ruta del archivo. Heylin revisa contra la checklist y responde "aprobado" o con la lista sección / problema / corrección.
5. **Heylin le resume el estado a kiva** en cada hito importante y le pide aprobación final antes de dar algo por cerrado.

## 4. Reglas del equipo

- Nadie edita los originales de OneDrive ni envía nada sin la aprobación de kiva. Se trabaja en copias locales.
- Se usa una sola skill compartida: `sgsi-proyecto-umg`.
- No se fabrican capturas, resultados ni evidencias.
- La aprobación técnica de Heylin no reemplaza la decisión final de kiva.

## 5. Archivos clave

- Guía maestra: `/workspace/Material Estándares de Seguridad/Guia_Maestra_Proyecto_Final_SGSI_Grupo3.docx`
- Vista previa: `/workspace/guia/Guia_Maestra_Proyecto_Final_SGSI_Grupo3_preview.pdf`
- Checklist de normas: `/workspace/guia/revision-normas.md`
- Revisiones: `/workspace/guia/correcciones-guia-maestra.md` y `/workspace/guia/segunda-revision-guia-maestra.md`
